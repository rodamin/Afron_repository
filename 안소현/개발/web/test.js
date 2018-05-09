alert("Hello");
	  var a;
	  a="<h1>js</h1>";
	  document.write(a);
	  document.write("world!"); //world 출력.
	  document.write("<br>");
      document.write(typeof a);
	  
	  
	  document.write("<br>");
	  var num1=10;
	  var num2=15
      if(num1==num2)
      {document.write("num1==num2"); }
      if(num1===num2)
	  {document.write("num1===num2");}
	  else
      {document.write("num1!==num2");}

	  document.write("<br>");
	  
	  var i=0;
	  while(i==0)
	  {
	  document.write(" while ");
	  document.write(i);
	  i++;}
	  document.write("<br>");
	  do{document.write(" do while ");
	  document.write(i);
	  i++;}
	  while(i==0);
	  document.write("<br>");
	  
	  
	  for(i=0; i<3; i++)
      {document.write(" for loop ");
	  document.write(i);}