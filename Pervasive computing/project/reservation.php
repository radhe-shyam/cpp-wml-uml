<?php echo 'Content-type: text/vnd.wap.wml'; ?>
<?php echo '<?xml version="1.0"?'.'>'; ?>
<!DOCTYPE wml PUBLIC "-//WAPFORUM//DTD WML 1.2//EN"
"http://www.wapforum.org/DTD/wml12.dtd">

<wml>
<card id="reservation" title="rese">
<p>
<?php
$name=$_GET["name"];
$day=$_GET["day"];
$month=$_GET["month"];
$year=$_GET["year"];
$from=$_GET["from"];
$to=$_GET["to"];
$class=$_GET["class"];
$no=$_GET["no"];
$credit=$_GET["credit"];
$total=$no*12000;
if(($name=="")||($day=="")||($month=="")||($year=="")||($from=="")||($to=="")||($class=="")||($no=="")||($credit==""))
{
echo "Enter the details properly:";
}
else if(($from==$to))
{
echo "Source and destination should not be same";
}
else
{
$con=mysql_connect("localhost","root","") or die("Error in connection");
mysql_select_db("airline",$con) or die("Error in connection");
$query="insert into reserve values('".$name."',".$day.",'".$month."',".$year.",'".$from."','".$to."','".$class."',".$no.",".$credit.")";
mysql_query($query,$con) or die ("Error occured");
echo "Your ticket has been reserved successfully:<br>";
mysql_close($con);
}
?>
Your travelling details:<br/>
<table border=1>
<tr>
<td>
Name:</td><td><?php echo $name; ?></td></tr>
<tr>
<td>
date of journey:</td><td><?php echo $day; ?></td><td><?php echo $month; ?></td><td><?php echo $year; ?></td></tr>
<tr>
<td>
From:</td><td><?php echo $from; ?></td></tr>
<tr>
<td>
To:</td><td><?php echo $to; ?></td></tr>
<tr>
<td>
class:</td><td><?php echo $class; ?></td></tr>
<tr>
<td>
no of passengers:</td><td><?php echo $no; ?></td></tr>
<tr>
<td>Amount:</td><td><?php echo $total; ?></td></tr>
</table><br><br><br><br><br><br><br><br>
<p align="center"><a href="home.wml"><img src="images/home2.jpg" height=100 width=100></p></a></img>

</p>
</card>
</wml>