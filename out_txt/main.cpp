#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using  namespace  std;
 
// int  main()
// {
//      vector<string> vec;
//      vec.push_back( "马年快乐!!!" );
//      vec.push_back( "so easy!!!!" );

//      ofstream out( "out.txt" ,ios::out);
//      int  len = vec.size();
//      for ( int  i=0;i<len;++i)
//      {
//          out<<vec[i]<<endl;
//      }
//      return 0;
// }
int  main( int  argc,  char ** argv)
{
  string a= "hello " ;
  string b= "world " ;
  string c= "!\n" ;
  string d = "******";
  vector<string> e;
  e.push_back(a);
  e.push_back(b);
  e.push_back(c);
  e.push_back(d);
  ofstream fout( "a.txt" ,ios_base::out);
  //fout.open( "a.txt" ,ios_base::out);
  if (fout.is_open())
   {
    for (vector<string>::iterator i=e.begin(),end=e.end(); i!=end; ++i)
     {
      fout<<(*i)<<endl;
     }
   }
  fout.close();
  return  0;
}