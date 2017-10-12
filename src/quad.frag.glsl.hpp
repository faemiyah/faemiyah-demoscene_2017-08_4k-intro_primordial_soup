static const char *g_shader_frag_quad = ""
#if defined(USE_LD)
"quad.frag.glsl"
#else
"layout(location=6)uniform sampler2D y;"
"layout(location=7)uniform sampler2D p;"
"in vec2 c;"
"out vec4 i;"
"void main()"
"{"
"vec4 v=vec4(0);"
"float r=(b/8888-2/(8889-texture(p,c,2.1).r*8887))*2;"
"for(float e=-3.142;"
"e<3.142;"
"e+=.629)v+=texture(y,c+vec2(cos(e),sin(e))*r*.008,r*r)*.1;"
"vec2 m=c*2-1;"
"vec3 n=normalize(t[2]),s=normalize(cross(n,normalize(t[3]))),o=normalize(m.r*1.67*s+m.g*normalize(cross(s,n))-n);"
"float g=(a.g+26660.)/26660.,x=dot(normalize(vec3(-.1,1,-.1)),o),u=dot(normalize(vec3(-.3,1,-.3)),o),d=dot(normalize(vec3(-.7,1,-.7)),o),e=max((x+u+d)/5,max(x,max(u,d)))*(.9+f(a*.0001+o*.009)/5),z=smoothstep(11111111.,16000000.,float(t[5].b))*.6;"
"i=(1-v.a)*vec4(mix(vec3(0),mix(vec3(.2),vec3(.4,.4,.8),g),f(a*.00001+o*.006))+max(e*e*e*e*e*g,0),1)*(1-z)+v*(1+z);"
"e=min(1,(2-abs(c.g))*smoothstep(-.05,.0,l-.05)*smoothstep(-1.,-.95,-l));"
"i*=e*e*e;"
"}"
#endif
"";
