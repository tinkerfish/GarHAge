/*   
 * GarHAge
 * a Home-Automation-friendly ESP8266-based MQTT Garage Door Controller
 * Licensed under the MIT License, Copyright (c) 2017 marthoc
 * 
 * User-configurable Parameters 
*/

// Wifi Parameters

#define WIFI_SSID "your-ssid-name"
#define WIFI_PASSWORD "your-ssid-password"

// Static IP Parameters

#define STATIC_IP false
#define IP 192,168,1,100
#define GATEWAY 192,168,1,1
#define SUBNET 255,255,255,0

// MQTT Parameters

#define MQTT_BROKER "w.x.y.z"
#define MQTT_CLIENTID "GarHAge"
#define MQTT_USERNAME "your-mqtt-username"
#define MQTT_PASSWORD "your-mqtt-password"
#define HA_MQTT_DISCOVERY false
#define HA_MQTT_DISCOVERY_PREFIX "homeassistant"

// Relay Parameters

#define ACTIVE_HIGH_RELAY true

// Door 1 Parameters

#define DOOR1_ALIAS "Garage Door 1"
#define MQTT_DOOR1_ACTION_TOPIC "garage/door/1/action"
#define MQTT_DOOR1_STATUS_TOPIC "garage/door/1/status"
#define DOOR1_OPEN_PIN D1
#define DOOR1_CLOSE_PIN D1
#define DOOR1_STATUS_PIN D5
#define DOOR1_STATUS_SWITCH_LOGIC "NO"

// Door 2 Parameters

#define DOOR2_ENABLED false
#define DOOR2_ALIAS "Garage Door 2"
#define MQTT_DOOR2_ACTION_TOPIC "garage/door/2/action"
#define MQTT_DOOR2_STATUS_TOPIC "garage/door/2/status"
#define DOOR2_OPEN_PIN D2
#define DOOR2_CLOSE_PIN D2
#define DOOR2_STATUS_PIN D6
#define DOOR2_STATUS_SWITCH_LOGIC "NO"

// Aux Door 1 Parameters

#define AUX_DOOR1_ENABLED false
#define AUX_DOOR1_ALIAS "Garage Aux Door 1"
#define MQTT_AUX_DOOR1_ACTION_TOPIC "garage/aux_door/1/action"
#define MQTT_AUX_DOOR1_STATUS_TOPIC "garage/aux_door/1/status"
#define AUX_DOOR1_STATUS_PIN D3
#define AUX_DOOR1_STATUS_SWITCH_LOGIC "NO"

// Aux Door 2 Parameters

#define AUX_DOOR2_ENABLED false
#define AUX_DOOR2_ALIAS "Garage Aux Door 2"
#define MQTT_AUX_DOOR2_ACTION_TOPIC "garage/aux_door/2/action"
#define MQTT_AUX_DOOR2_STATUS_TOPIC "garage/aux_door/2/status"
#define AUX_DOOR2_STATUS_PIN D4
#define AUX_DOOR2_STATUS_SWITCH_LOGIC "NO"

// Temperature and Humidity Sensor Parameters

#define DHT_ENABLED false
#define DHTPIN D0
#define DHTTYPE DHT11 // or: DHT21 or DHT22
#define DHT_MQTT_TEMPERATURE_TOPIC "garage/temperature"
#define DHT_MQTT_HUMIDITY_TOPIC "garage/humidity"
#define DHT_PUBLISH_INTERVAL 300
#define DHT_TEMPERATURE_CELSIUS true
#define DHT_TEMPERATURE_ALIAS "Garage Temperature"
#define DHT_HUMIDITY_ALIAS "Garage Humidity"

#define BME_ENABLED false
#define BME_SCL D7
#define BME_SDA D8
#define BME_MQTT_TEMPERATURE_TOPIC "garage/temperature"
#define BME_MQTT_HUMIDITY_TOPIC "garage/humidity"
#define BME_MQTT_PRESSURE_TOPIC "garage/pressure"
#define BME_PUBLISH_INTERVAL 300
#define BME_TEMPERATURE_CELSIUS false
#define BME_TEMPERATURE_ALIAS "Garage Temperature"
#define BME_HUMIDITY_ALIAS "Garage Humidity"
#define BME_PRESSURE_ALIAS "Garage Pressure"
#define SEALEVELPRESSURE_HPA (1013.25)
