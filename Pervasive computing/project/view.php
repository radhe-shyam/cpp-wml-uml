<?php echo 'Content-type: text/vnd.wap.wml'; ?>
<?php echo '<?xml version="1.0"?'.'>'; ?>
<!DOCTYPE wml PUBLIC "-//WAPFORUM//DTD WML 1.2//EN"
"http://www.wapforum.org/DTD/wml12.dtd">

<wml>
<card id="reservation" title="rese">
<p>
<?php

$con=mysql_connect("localhost","root","") or die("Error in connection");
mysql_select_db("airline",$con) or die("Error in connection");
$query="select * from reserve";
$rec_set=mysql_query($query,$con);
echo "<table border=1 bgcolor=yellow cellpadding=20 cellspacing=5>";
while($rec=mysql_fetch_assoc($rec_set))
{
echo "<tr>";
echo "<td>".$rec['name']."</td>";
echo "<td>".$rec['day']."</td>";
echo "<td>".$rec['month']."</td>";
echo "<td>".$rec['year']."</td>";
echo "<td>".$rec['fro']."</td>";
echo "<td>".$rec['too']."</td>";
echo "<td>".$rec['type']."</td>";
echo "<td>".$rec['no']."</td>";
echo "<td>".$rec['credit']."</td>";
echo "</tr>";
}
echo "</table>";
mysql_close($con);
?>
<br><br><br><br><br><br><br><br>
<p align="center"><a href="home.wml">LOGOUT</p></a>

</p>
</card>
</wml>