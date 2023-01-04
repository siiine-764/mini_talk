<h1>Minitalk</h1>
  
<ul>
	<li>A protect to create a program that outputs the sting from the server when the client sends a string to the server.</li>
	<li>Manufactured using signal of UNIX.</li>
</ul>

<h1>mandatory</h1>

<ul>
	<li>The server should run first, then the client should run, after running, the server's PID is output</li>
	<li>When the client is executed, it receives the PID of the server and the string to be transmitted as parameters.</li>
	<li>The client should send the string received as a parameter to the server, and the server should output the received string.</li>
	<li>Communication between server and client must use UNIX signal</li>
	<li>The server needs to display the string very quickly</li>
	<li>The server should be able to receive strings from multiple clients in succession without having to restart.</li>
	<li>Only two signals, SIGUSR1 and SIGUSR2, must be used.</li>
</ul>

<h1>Bonus Part</h1>

<ul>
	<li>The server acknowledges every message received by sending back a signal to the client.</li>
	<li> Unicode characters support!</li>
</ul>
Diagram to explain: https://miro.com/welcomeonboard/Q1ZiWVZFalpDdWdORkpudlBYaXRtaGo1dkxJQVUxMVhEQU8xTUxWc2ZCcU5uMnowcE0zMmd0Zm5rMnBBek9QZHwzNDU4NzY0NTM5MDg3OTIwNDMwfDI=?share_link_id=918616247506<br>
notebook: https://hip-shield-dca.notion.site/minitalk-d333bcfe2e4c403cbf8518f931c5e64d
