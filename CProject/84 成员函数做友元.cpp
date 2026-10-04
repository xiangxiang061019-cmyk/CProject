//#include <iostream>
//#include <string>
//
//class Building;
//class goodGay {
//public:
//	goodGay();
//	void visit();
//	void visit02();
//
//	~goodGay()
//	{
//		delete building;
//		building = nullptr;
//	}
//
//private:
//	Building* building;
//
//
//};
//
//
//class Building {
//friend void goodGay::visit();
//public:
//	//Building():m_bedroom("卧室"),m_sittingroom("客厅")
//	//{
//
//	//}
//	Building();
//public:
//	std::string m_sittingroom;
//private:
//	std::string m_bedroom;
//
//};
//
//Building::Building()
//{
//	this->m_bedroom = "卧室";
//	this->m_sittingroom = "客厅";
//}
//goodGay::goodGay()
//{
//	this->building = new Building;
//}
//
//void goodGay::visit()
//{
//	std::cout << "好基友正在访问:" << building->m_sittingroom << std::endl;
//	std::cout << "好基友正在访问:" << building->m_bedroom << std::endl;
//
//}
//void goodGay::visit02()
//{
//	std::cout << "好基友正在访问:" << building->m_sittingroom << std::endl;
//	//std::cout << "好基友正在访问:" << building->m_bedroom << std::endl;
//}
//int main()
//{
//	goodGay p1;
//	p1.visit();
//	p1.visit02();
//	return 0;
//}