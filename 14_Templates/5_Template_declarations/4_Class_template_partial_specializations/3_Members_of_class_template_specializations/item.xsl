<?xml version="1.0" encoding="Shift_JIS"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
   <html>
   <head>
   <title>Programming Languages -- C++</title>
   <link rel="stylesheet" type="text/css" href="../../../../item.css" />
   </head>

   <body>
   <p class="title" align="left">
       14.5.4.3 Members of class template specializations
   </p>

   <xsl:apply-templates />

   </body>
   </html>
</xsl:template>

<xsl:template match="item">

<p class="item" align="left">
  <a>
  <xsl:attribute name="href">
    <xsl:value-of select="source" />
  </xsl:attribute>
  <xsl:value-of select="abstract" />
  </a>
</p>

</xsl:template>

</xsl:stylesheet> 
