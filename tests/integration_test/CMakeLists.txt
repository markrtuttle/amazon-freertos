if(TARGET AFR::core_mqtt)
    # MQTT test
    afr_test_module(core_mqtt_integration)

    afr_module_sources(
        ${AFR_CURRENT_MODULE}
        INTERFACE
            "${CMAKE_CURRENT_LIST_DIR}/core_mqtt_system_test.c"
    )

    afr_module_dependencies(
        ${AFR_CURRENT_MODULE}
        INTERFACE
            AFR::core_mqtt
            AFR::transport_interface_secure_sockets
            AFR::common
            AFR::platform
            AFR::retry_utils
    )
endif()

# Shadow test
afr_test_module(device_shadow_integration)

afr_module_sources(
    ${AFR_CURRENT_MODULE}
    INTERFACE
        "${CMAKE_CURRENT_LIST_DIR}/shadow_system_test.c"
)

afr_module_dependencies(
    ${AFR_CURRENT_MODULE}
    INTERFACE
        AFR::core_mqtt
        AFR::device_shadow
        AFR::transport_interface_secure_sockets
        AFR::common
        AFR::platform
        AFR::retry_utils
)

# FreeRTOS+TCP Test
if(TARGET AFR::freertos_plus_tcp)
    afr_test_module(freertos_tcp_test)

    afr_module_sources(
        ${AFR_CURRENT_MODULE}
        INTERFACE
            "${CMAKE_CURRENT_LIST_DIR}/test_freertos_tcp.c"
    )

    afr_module_dependencies(
        ${AFR_CURRENT_MODULE}
        INTERFACE AFR::freertos_plus_tcp
    )
endif()
