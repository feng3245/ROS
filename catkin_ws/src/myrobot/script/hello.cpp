
#include <gazebo/gazebo.hh>

namespace gazebo
{
class WorldPluginMyRobot : public WorldPlugin
	{
		public: WorldPluginMyRobot() : WorldPlugin()
		{
			printf("Welcome to Olubukola's World!\n");
		}
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr Sdf)
		{
		}
	};
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}
