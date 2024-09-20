#add the executable target named HelloWorld
add_executable(HelloWorld hello.cpp)
target_link_libraries(HelloWorld PUBLIC basic)
install(TARGETS HelloWorld DESTINATION bin)