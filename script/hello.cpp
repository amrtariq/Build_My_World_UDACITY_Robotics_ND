#include <gazebo/gazebo.hh>
// Used Template USed in Course Lecture
namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Welcome to Amr Tarek Salaheldin’s World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
