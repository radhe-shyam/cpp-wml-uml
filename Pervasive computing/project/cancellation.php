<?php echo 'Content-type: text/vnd.wap.wml'; ?>
<?php echo '<?xml version="1.0"?'.'>'; ?>
<!DOCTYPE wml PUBLIC "-//WAPFORUM//DTD WML 1.2//EN"
"http://www.wapforum.org/DTD/wml12.dtd">

<wml>
<card id="reservation" title="rese">
<p>
<?php
$name=$_GET["na"];
$day=$_GET["da"];
$month=$_GET["mo"];
$year=$_GET["ye"];
$from=$_GET["fr"];
$to=$_GET["t"];
if(($name=="")||($day=="")||($month=="")||($year=="")||($from=="")||($to==""))
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
$query="delete from reserve where name='".$name."' and day=".$day." and month='".$month."' and year=".$year." and fro='".$from."' and too='".$to."'";
mysql_query($query,$con) or die ("Error occured");
echo "Your ticket has been cancelled successfully:<br>";
mysql_close($con);
}
?>
Your cancelled details:<br/>
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
</table><br><br><br><br><br><br><br><br>
<p align="center"><a href="home.wml"><img src="images/home2.jpg" height=100 width=100></p></a></img>

</p>
</card>
</wml>