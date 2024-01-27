# Welcome to My Ngram
***

## Task
The task wants a program that it will display, one per line, each character and the numbers of times it appears.
## Description
<p>In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech. The items can be phonemes, syllables, letters, words or base pairs according to the application. The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.</p>

## Installation
Any installation required. We used these libraries that doesn't require installation

#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>


## Usage
For runnig this project do thise instead
<ol>
  <li>gcc -o output my_ngram.c</li>
  <li>./output "your text"</li>
</ol>
<p><strong>Example 1</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "abcdef"
a:1
b:1
c:1
d:1
e:1
f:1
$&gt;
</code></pre>

<p><strong>Example 2</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "        "
 :8
$&gt;
</code></pre>
<p><strong>Example 3</strong></p>
<pre class=" language-plain"><code class=" language-plain">$&gt;./my_ngram "aaabb" "abc"
a:4
b:3
c:1
$&gt;
</code></pre>
