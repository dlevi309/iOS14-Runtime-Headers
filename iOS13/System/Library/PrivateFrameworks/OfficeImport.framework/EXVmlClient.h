/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAVReadClient.h>

@interface EXVmlClient : NSObject <OAVReadClient>
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(void)readAnchor:(xmlNode*)arg1 to:(id)arg2 ;
+(id)readComment:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
+(id)edTextBoxForVmlTextInShape:(xmlNode*)arg1 to:(id)arg2 state:(id)arg3 ;
@end

