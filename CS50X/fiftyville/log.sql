-- Keep a log of any SQL queries you execute as you solve the mystery.
--To figure out the description
SELECT id,description
FROM crime_scene_reports
WHERE month=7 AND day=28 AND street='Humphrey Street';

--What are the witnesses names? First I should find their id and then names.

SELECT transcript
FROM interviews
WHERE year='2021' AND month='7' AND day='28' AND transcript LIKE '%bakery%';

--Who was the one that phone calls someone
SELECT bakery_security_logs.activity,bakery_security_logs.license_plate,people.name
FROM people
JOIN bakery_security_logs ON bakery_security_logs.license_plate=people.license_plate
WHERE bakery_security_logs.year=2021
AND bakery_security_logs.month=7
AND bakery_security_logs.day=28
AND bakery_security_logs.hour=10
AND bakery_security_logs.minute>=15
AND bakery_security_logs.minute<=25;
--Who was planning to withdraw that time
SELECT people.name,atm_transactions.transaction_type FROM people
JOIN bank_accounts ON bank_accounts.person_id=people.id
JOIN atm_transactions ON atm_transactions.account_number=bank_accounts.account_number
WHERE atm_transactions.year=2021
AND atm_transactions.month=7
AND atm_transactions.day=28
AND atm_location="Leggett Street"
AND atm_transactions.transaction_type= "withdraw";
--WHO was talking on his phone at that time
SELECT caller,receiver FROM phone_calls
WHERE year=2021 AND month=7 AND day=28 AND duration<60;
--two potantial criminal left
SELECT name FROM people
WHERE phone_number IN (
    "(130) 555-0289",
    "(499) 555-9472",
    "(367) 555-5533",
    "(499) 555-9472",
    "(286) 555-6063",
    "(770) 555-1861",
    "(031) 555-6622",
    "(826) 555-1652",
    "(338) 555-6650"
);
--I NOW HAVE TP FIND THE AIRPORT
SELECT abbreviation,full_name,city,flights.destination_airport_id FROM airports
JOIN flights ON airports.id=flights.origin_airport_id
WHERE year=2021 AND month=7 AND day=29 AND airports.city="Fiftyville";

--I found the fastest way for them
SELECT id,hour,minute,origin_airport_id,destination_airport_id
FROM flights
WHERE year=2021 AND month=7 AND day=29 ORDER BY hour ASC
LIMIT 1;

SELECT full_name,city FROM airports
WHERE id=4;
