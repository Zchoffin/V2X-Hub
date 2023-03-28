#pragma once

#include <stdlib.h>   
#include <string>

namespace tmx::utils::sim{
        /**
         * @brief Name of environment variable for enabling simulation components for V2X-Hub. If set
         * to "true" or "TRUE" simulation components will be enable. Otherwise, simulation components 
         * will not be enabled.
         */
        inline static const char *SIMULATION_MODE = "SIMULATION_MODE";
        /**
         * @brief Name of environment variable for storing Kafka broker connection string (including port). Only necessary
         * in SIMULATION MODE for transmitting and consuming time synchronization messages.
         */
        inline static const char *KAFKA_BROKER_ADDRESS = "KAFKA_BROKER_ADDRESS";
        /**
         * @brief Name of environment variable for storing Kafka time sync topic. Only necessary
         * in SIMULATION MODE for transmitting and consuming time synchronization messages.
         */
        inline static const char *TIME_SYNC_TOPIC = "TIME_SYNC_TOPIC";
        /**
         * @brief Name of environment variable for storing IP address of CDASim application. Only necessary
         * in SIMULATION MODE for connecting to CDASim.
         */
        inline static const char *SIMULATION_IP = "SIMULATION_IP";
        /**
         * @brief Name of environment variable for storing port on CDASim that handles registration attempts. Only necessary
         * in SIMULATION MODE for connecting to CDASim.
         */
        inline static const char *SIMULATION_REGISTRATION_PORT = "SIMULATION_REGISTRATION_PORT";
        /**
         * @brief Name of environment varaible for storing port for receiving time sync messages from CDASim. Only 
         * necessary in SIMULATION MODE for CDASim time sync.
         */
        inline static const char *TIME_SYNC_PORT = "TIME_SYNC_PORT";
        /**
         * @brief Name of environment variable for storing port for receiving v2x messages from CDASim. Only
         * necessary in SIMULATION MODE for CDASim message forwarding.
         */
        inline static const char *SIM_V2X_PORT = "SIM_V2X_PORT";
        /**
         * @brief Name of environment variable for storing local IP of V2X Hub. Only necessary in SIMULATION MODE 
         * for CDASim connection.
         */
        inline static const char *LOCAL_IP = "LOCAL_IP";
        /**
         * @brief Function to return bool indicating whether V2X-Hub deployment is in SIMULATION MODE or not.
         * @return true if SIMULATION_MODE is "true" or "TRUE" and false otherwise.
         */
        bool is_simulation_mode();
}