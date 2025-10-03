include("E:/SerialQT/Humidity/build/Desktop_Qt_6_8_3_MinGW_64_bit-Release/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/Humidity-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtserialport")

qt6_deploy_runtime_dependencies(
    EXECUTABLE E:/SerialQT/Humidity/build/Desktop_Qt_6_8_3_MinGW_64_bit-Release/Humidity.exe
    GENERATE_QT_CONF
)
