<?xml version="1.0" encoding="Shift_JIS"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
   <html>
   <head>
   <title>Programming languages -- C++</title>
   <link rel="stylesheet" type="text/css" href="../item.css" />
   </head>

   <body>
   <p class="title" align="left">
       8 Declarators
   </p>

   <xsl:apply-templates />

   </body>
   </html>
</xsl:template>

<xsl:template match="section">

<p class="item" align="left">
  <a>
  <xsl:attribute name="href">
    <xsl:value-of select="@url" />
  </xsl:attribute>
  <xsl:value-of select="title" />
  </a>
</p>

</xsl:template>

</xsl:stylesheet> 

