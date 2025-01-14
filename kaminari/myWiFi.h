/*
 * Kaminari
 *
 * Copyright (C) 2020 Richard "Shred" Körber
 *   https://github.com/shred/kaminari
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

// The name of your WLAN
#define MY_SSID "Shrunk"

// Your WLAN's password
#define MY_PSK "Spartan08!"

// A random API key to protect your lightning detector from unauthorized access
#define MY_APIKEY "Spartan08!"

// The MDNS name of your detector
#define MY_MDNS_NAME "shrunklightning"

// ---- MQTT ----------------------------------------------
// Uncomment the next line to enable MQTT
// #define MY_MQTT_ENABLED

// MQTT server host name
#define MY_MQTT_SERVER_HOST "mqtt.localdomain"

// Port of the MQTT server, usually 1883
#define MY_MQTT_SERVER_PORT 1883

// MQTT Client ID (just use the default if in doubt)
#define MY_MQTT_CLIENT_ID "kaminari-1"

// User name for MQTT server authentication, NULL if no authentication needed
#define MY_MQTT_USER "kaminari"

// Password for MQTT server authentication, NULL if no authentication needed
#define MY_MQTT_PASSWORD "mYsEcReTmQtTpAsSwOrD"

// MQTT topic to be used
#define MY_MQTT_TOPIC "sensors/lightning"

// Set to true if message should be retained
#define MY_MQTT_RETAIN false
