void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
 if(value==true)
   return func1();
  else 
   return func2();
}

