#include<iostream>
using namespace std;
class XMLData{
	string xmlData;
	public:
		XMLData(string pXmlData){
			xmlData = pXmlData;
		}
		string getXMLData(){
			return xmlData;
		}
	
};
class DataAnalyticsTool {// this is the tool to analyse the data.
	string jsonData;
	public:
		DataAnalyticsTool(){}
		DataAnalyticsTool(string pjsonData){
			jsonData = pjsonData;// here p is parameter
		}
	virtual	void analyseData(){
			cout<<"analysing data "<<jsonData<<endl;
		}
};
class Client{
	public:
		// process dtata
		void processdata(DataAnalyticsTool * tool){
			tool->analyseData();
		}
};
class Adapter : public DataAnalyticsTool {
	XMLData * xmlData;
	public:
		Adapter(XMLData * pXMLData){
			xmlData = pxmlData;
			// now we have to call analyse data frrom the adapter itself
			void analyseData() override {
				cout<<"converting xml data"<<xmlData->getXMLData()<<"to json data"<<endl;
				cout<<"analysing the converted  json data"
			}
		}
};
int main(){
	// we crete objects of all three classes
	XMLData * xmlData = new XMLData("sample XML Data");// constructorexcept
	DataAnalyticsTool * tool = new Adapter();
	Client * client  = new Client;
	client ->processdata(tool);
	

}

