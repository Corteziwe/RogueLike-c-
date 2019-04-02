add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES} ../../../aleksandr-trojan-game/src/game/main.cpp ../include/game/Position.h ../include/game/Tile.h game/GameObject.cpp ../include/game/GameObject.h game/Menu.cpp ../include/game/Menu.h game/Engine.cpp ../include/game/Engine.h game/Level.cpp ../include/game/Level.h game/Systems/LevelSystem.cpp ../include/game/Systems/LevelSystem.h ../include/game/Systems/System.h game/Systems/MovementSystem.cpp ../include/game/Systems/MovementSystem.h game/Systems/CollisionSystem.cpp ../include/game/Systems/CollisionSystem.h)

target_link_libraries(${PROJECT_NAME} ${BLT_LIBRARIES})

file(COPY ${BLT_LIBRARY} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
