//#include <iostream>
////抽象CPU类
//class CPU
//{
//public:
//	virtual void cpu() = 0;
//};
////抽象内存条类
//class Memorymodule
//{
//public:
//	virtual void memory() = 0;
//};
////抽象显卡类
//class Graphicscard
//{
//public:
//	virtual void Gr() = 0;
//};
//
////电脑类
//class computer
//{
//public:
//	computer(CPU*cpu, Memorymodule*Me, Graphicscard*Gr)
//	{
//		this->m_cpu = cpu;
//		this->m_Gr = Gr;
//		this->m_Me = Me;
//	}
//	void word()
//	{
//		this->m_cpu->cpu();
//		this->m_Gr->Gr();
//		this->m_Me->memory();
//	}
//	~computer()
//	{
//		if (this->m_cpu!=nullptr)
//		{
//			delete this->m_cpu;
//			this->m_cpu = nullptr;
//		}
//		else if (this->m_Gr != nullptr)
//		{
//			delete this->m_Gr;
//			this->m_Gr = nullptr;
//		}
//		else if (this->m_Me!= nullptr)
//		{
//			delete this->m_Me;
//			this->m_Me = nullptr;
//		}
//	}
//private:
//	CPU* m_cpu;
//	Memorymodule* m_Me;
//	Graphicscard* m_Gr;
//};
//
////具体厂商
//class IntelCpu :public CPU
//{
//	void cpu()
//	{
//		std::cout << "IntelCpu" << std::endl;
//	}
//};
//class LenovoCpu :public CPU
//{
//	void cpu()
//	{
//		std::cout << "LenovoCpu" << std::endl;
//	}
//};
//
//class IntelMemorymodule :public Memorymodule
//{
//	void memory()
//	{
//		std::cout<<"IntelMemorymodule" << std::endl;
//	}
//};
//
//class LenovoMemorymodule :public Memorymodule
//{
//	void memory()
//	{
//		std::cout << "LenovoMemorymodule" << std::endl;
//	}
//};
//
//class IntelGraphicscard :public Graphicscard
//{
//	void Gr()
//	{
//		std::cout << "IntelGraphicscard" << std::endl;
//	}
//};
//
//class LenovoGraphicscard:public Graphicscard
//{
//	void Gr()
//	{
//		std::cout << "LenovoGraphicscard" << std::endl;
//	}
//};
//
//void test01()
//{
//	CPU* cpu = new IntelCpu;
//	Memorymodule* Me = new IntelMemorymodule;
//	Graphicscard* Gr = new IntelGraphicscard;
//	//computer C1(cpu,Me,Gr);
//	//C1.word();
//	computer* C2 = new computer(cpu,Me,Gr);
//	C2->word();
//}
//int main()
//{
//	test01();
//	return 0;
//}