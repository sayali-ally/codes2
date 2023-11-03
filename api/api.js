POST api/orders
{
    "customer_id":123,
    "item":[
        {"product_id":42, "quantity": 2},
        {"product_id":56, "quantity": 1}
    ]
}

Response
{
    "order_id":98,
    "total_amount":100,
    "status": "pending"
}

Get order details

GET api/orders/98

Response 
{
    "order_id":98,
    "customer_id":123,
    "item":[
        {"product_id":42, "quantity": 2},
        {"product_id":56, "quantity": 1}
    ],
    "total_amount":100,
    "status": "pending"

}

process payments 
POST api/payments 
{
    "order_id":98,
    "total_amount":100,
    "payment_mode": "credit card",
    "card_info":{
        "card_no": "**** **** **** 3609",
        "expiry_data": "01/27",
        "cvv": "***"
    }
}

Response 
{
    "payment_id": 55,
    "status":"completed",
    "payment_date": "2023-01-12"
}

Track shipment 
GET api/orders/98/shipment

Response 
{
    "order_id":98,
    "shipping_date": "2023-09-12T09:00:00",
    "carrier": "FedEx",
    "tracking_number": "1234567890",
    "estimated_delivery_date": "2023-09-15"
}