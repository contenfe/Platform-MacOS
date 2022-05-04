include_directories(${PROJECT_SOURCE_DIR}/include)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(exec main.cpp RefinedAbstraction.cpp ConcreteAbstractionImpA.cpp ConcreteAbstractionImpB.cpp Abstraction.cpp AbstractionImp.cpp)