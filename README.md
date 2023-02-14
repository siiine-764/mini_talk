# mini_talk
<h1>Minitalk</h1>

Diagram :

https://miro.com/welcomeonboard/Q1ZiWVZFalpDdWdORkpudlBYaXRtaGo1dkxJQVUxMVhEQU8xTUxWc2ZCcU5uMnowcE0zMmd0Zm5rMnBBek9QZHwzNDU4NzY0NTM5MDg3OTIwNDMwfDI=?share_link_id=412937806099

Detail:

https://hip-shield-dca.notion.site/minitalk-d333bcfe2e4c403cbf8518f931c5e64d

<h2>Execution :</h2>

    <code>make</code> or <code>make all</code> <code>make bonus</code> 

    bash <code>./server</code>

    bash <code>./client [SERVER PID] [SEND MESSAGE]</code>
    
<h2>Assignment Requirements </h2>

When the client runs, it should display the PID.

When a string is received, the server SHOULD display it.

Communication between server and client can use only two signals, SIGUSR1 and SIGUSR2 among UNIX signals.

The server must be able to display the string very quickly.

It should be able to display a string of 100 characters in one second.

The server should be able to receive strings from multiple clients in succession without having to restart.

<h2>Bonus : </h2>

Addition of small-scale acknowledgment system (acknowledgment between server/client)

Apply half-duplex communication method instead of simplex.

Try to support Unicode characters as well.

🖤∑∞☞★⚝✅🔥⌚☣☮🌏📱Ⅻ🚀€🍔🍦👑⚽🎵🎧♻
