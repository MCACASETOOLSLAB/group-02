(function(){
	try{
		var pgPwd = document.getElementsByTagName("input"),lenPwd = pgPwd.length,bPwd=false,p;
		for(p=0;p<lenPwd;p++){
			if(pgPwd[p].type == "password"){
				bPwd = true;
				break;
			}
		}
		if(bPwd){
			if(window.K7SiteRating){
				var lang = "k7wp_"+window.K7SiteRating.GetProductParam(3);
				if(execScript){
					execScript(window.K7SiteRating.GetScript(lang));
					execScript(window.K7SiteRating.GetScript("iden"));
				}
				else{
					eval(window.K7SiteRating.GetScript("iden"));
					eval(window.K7SiteRating.GetScript(lang));
				}
			}
			else{
				
				document.addEventListener("K7WPP_LookupListener", function(e){
					try{
						var et 	= e.target.getAttribute("et"),res = e.target.getAttribute("res"),ccextn_id = e.target.getAttribute("id");
						switch(et){
							case "pwd":
								window.k7hook_idprot_pwd = e.target.getAttribute("res");
							break;
							case "getScript":
								eval(res);
							break;
							case "getLang":
								var lang = "k7wp_"+res;
								fnGetScript(lang,'getScript');
							break;
						}
						if(ccextn_id){
							document.documentElement.removeChild(document.getElementById(ccextn_id));
						}
					}
					catch(e){}
				}, false, true);
				
				
				var fnGetScript = function(data,et){
					var element = document.createElement("K7SRDataElement");
					element.setAttribute('data',data);
					element.setAttribute('et',et);
					element.setAttribute('id',"ccextn_"+new Date().getTime());
					
					document.documentElement.appendChild(element);
					var evt = document.createEvent("Events");
					evt.initEvent("K7WP_LookupListener", true, false);
					element.dispatchEvent(evt);
				};
				fnGetScript('','getLang');
				fnGetScript('iden','getScript');
			}
		}
	}
	catch(e){}
})();

