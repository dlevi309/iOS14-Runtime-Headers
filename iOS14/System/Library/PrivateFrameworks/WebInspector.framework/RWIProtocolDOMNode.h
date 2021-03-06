/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDOMNode : RWIProtocolJSONObject

@property (assign,nonatomic) int nodeId; 
@property (assign,nonatomic) int nodeType; 
@property (nonatomic,copy) NSString * nodeName; 
@property (nonatomic,copy) NSString * localName; 
@property (nonatomic,copy) NSString * nodeValue; 
@property (nonatomic,copy) NSString * frameId; 
@property (assign,nonatomic) int childNodeCount; 
@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSString * documentURL; 
@property (nonatomic,copy) NSString * baseURL; 
@property (nonatomic,copy) NSString * publicId; 
@property (nonatomic,copy) NSString * systemId; 
@property (nonatomic,copy) NSString * xmlVersion; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) long long pseudoType; 
@property (assign,nonatomic) long long shadowRootType; 
@property (assign,nonatomic) long long customElementState; 
@property (nonatomic,retain) RWIProtocolDOMNode * contentDocument; 
@property (nonatomic,copy) NSArray * shadowRoots; 
@property (nonatomic,retain) RWIProtocolDOMNode * templateContent; 
@property (nonatomic,copy) NSArray * pseudoElements; 
@property (nonatomic,copy) NSString * contentSecurityPolicyHash; 
+(id)ik_nodeFromDOMNode:(id)arg1 ;
+(id)ik_nodeFromDOMNode:(id)arg1 depth:(int)arg2 ;
+(id)safe_initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5 ;
-(id)ik_nodeWithNodeId:(int)arg1 ;
-(void)ik_updateWithDOMNode:(id)arg1 fullfillChildren:(BOOL)arg2 dispatcher:(id)arg3 ;
-(id)ik_attributesDictionary;
-(id)ik_description;
-(void)ik_setAttributeValue:(id)arg1 name:(id)arg2 ;
-(void)ik_removeAttributeNamed:(id)arg1 ;
-(void)ik_updateWithDOMNode:(id)arg1 dispatcher:(id)arg2 ;
-(void)ik_removeChildWithId:(int)arg1 ;
-(void)ik_insertChild:(id)arg1 before:(id)arg2 ;
-(NSArray *)children;
-(int)nodeType;
-(NSString *)baseURL;
-(void)setAttributes:(NSArray *)arg1 ;
-(RWIProtocolDOMNode *)contentDocument;
-(int)nodeId;
-(NSString *)localName;
-(NSString *)documentURL;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)nodeName;
-(NSArray *)attributes;
-(NSString *)systemId;
-(void)setNodeType:(int)arg1 ;
-(void)setLocalName:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setName:(NSString *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(NSString *)nodeValue;
-(NSString *)publicId;
-(void)setDocumentURL:(NSString *)arg1 ;
-(void)setBaseURL:(NSString *)arg1 ;
-(void)setNodeName:(NSString *)arg1 ;
-(NSString *)value;
-(NSString *)xmlVersion;
-(void)setXmlVersion:(NSString *)arg1 ;
-(void)setNodeValue:(NSString *)arg1 ;
-(void)setChildNodeCount:(int)arg1 ;
-(int)childNodeCount;
-(void)setFrameId:(NSString *)arg1 ;
-(void)setNodeId:(int)arg1 ;
-(id)initWithNodeId:(int)arg1 nodeType:(int)arg2 nodeName:(id)arg3 localName:(id)arg4 nodeValue:(id)arg5 ;
-(void)setPublicId:(NSString *)arg1 ;
-(void)setSystemId:(NSString *)arg1 ;
-(void)setPseudoType:(long long)arg1 ;
-(long long)pseudoType;
-(void)setShadowRootType:(long long)arg1 ;
-(long long)shadowRootType;
-(void)setCustomElementState:(long long)arg1 ;
-(long long)customElementState;
-(void)setContentDocument:(RWIProtocolDOMNode *)arg1 ;
-(void)setShadowRoots:(NSArray *)arg1 ;
-(NSArray *)shadowRoots;
-(void)setTemplateContent:(RWIProtocolDOMNode *)arg1 ;
-(RWIProtocolDOMNode *)templateContent;
-(void)setPseudoElements:(NSArray *)arg1 ;
-(NSArray *)pseudoElements;
-(void)setContentSecurityPolicyHash:(NSString *)arg1 ;
-(NSString *)contentSecurityPolicyHash;
@end

