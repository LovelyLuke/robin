#include <string>

namespace Robin
{
	class Body
	{
	public:
		std::string name = "Untitled Body";
		void Init() {
			Robin::engine.AddBodyToRenderQueue(this);
			std::cout << name << " found!";
		}
	};
	
}