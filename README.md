<h3>Task</h3>
<p>In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. The items can be phonemes, syllables, letters, words or base pairs according to the application. The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.</p>
<p>Google Inc. has used this technique to improve the completion of its Search Engine. The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.</p>
<p>My Ngram will take 1 or multiple strings as arguments.</p>
<p>It will display, one per line, each character and the numbers of times it appears.</p>
<p>Order will be alphanumerical.</p>
<p><strong>Example 00</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "abcdef"
a:1
b:1
c:1
d:1
e:1
f:1
$&gt;
</code></pre>
<p><strong>Example 01</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "        "
 :8
$&gt;
</code></pre>
<p>8 spaces :-)</p>
<p><strong>Example 02</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "aaabb" "abc"
a:4
b:3
c:1
$&gt;
</code></pre>
<h3>Rules:</h3>
<ol>
<li>(If you are doing this as project) you must create a Makefile, and the output is the command itself</li>
<li>You can use:</li>
</ol>
<ul>
<li>printf(3)</li>
<li>write(2)</li>
</ul>
<ol start="3">
<li>NOT use:</li>
</ol>
<ul>
<li>Any functions/syscalls which does not appear in the previous list</li>
<li>Yes, it includes <strong>exit</strong>
</li>
<li>Multiline macros are forbidden</li>
<li>Include another .c is forbidden</li>
<li>Macros with logic (while/if/variables/...) are forbidden</li>
</ul>
<h3>Installation</h3>
If you want to work with is project you need this libraries
```
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
```
Dont worry I have already included thise libraries, so you shoud just run it!
