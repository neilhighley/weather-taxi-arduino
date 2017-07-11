# Weather Taxi

When I wake up, I'm going to ask alexa, do I need to get a taxi?

Alexa will run a node script to link to an app on my phone to get a reading from my arduino 101 from the last 10 seconds.

The phone app will send the last 10 seconds to the AWS node app and determine whether we need to call a taxi.

Alexa will ask whether to request a taxi.

If you confirm, Alexa will send an SMS to the local taxi firm to send a cab in 30 minutes


## Structure

1. Arduino 101
- Will wait for a request to collect data
- Will reply with data to connected device
- Will be powered by a battery pack

2. Phone app
- Will be constantly connected to Arduino 101
- Will request data from the Arduino 101
- Will wait for remote requests from Node app
- Will respond to remote request with Arduino 101 data

3. Alexa/Node app
- Triggered by voice request "Do I need a taxi?"
- Will connect with phone
- Will respond  to data
- Will send SMS
- Will confirm

## Typical interaction

_Neil wakes up_

"Alexa, Ask WeatherTaxi, Do I need to get a cab?"

**I'll check the weather thingy, dangling outside**

**It's blowing a gale and raining! Do you want me to get a cab**

"Ok"

**In Half an hour?**

"No"

**Later?**

"Yes"

**45 minutes?**

"Yes"

**Ok, on it**

_Sends SMS to taxi firm_

**SMS is sent, best get ready**

## Examples / Tutorials

https://www.arduino.cc/en/Guide/Arduino101#toc9

https://www.arduino.cc/en/Reference/CurieBLE

https://www.arduino.cc/en/Reference/CurieIMU





