do
{
    var ID=window.prompt("아이디를 입력해주세요. 아이디는 Hello 입니다. ");
    if (ID=="Hello")
    {
        alert("환영합니다.")
        document.write("<br>javascript World에 오신걸 환영합니다!");
        break;
    }
    else
    {
     alert("잘못 입력하셨습니다.");
    }
}while(true)
