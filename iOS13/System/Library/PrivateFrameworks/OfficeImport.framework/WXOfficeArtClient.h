/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@interface WXOfficeArtClient : OAXClient
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(xmlNode*)genericNonVisualPropertiesNodeForDrawableNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
-(id)readClientDrawableFromXmlNode:(xmlNode*)arg1 state:(id)arg2 ;
-(void)readBlipExtWithURI:(id)arg1 fromNode:(xmlNode*)arg2 toDrawable:(id)arg3 state:(id)arg4 ;
-(id)readGraphicData:(xmlNode*)arg1 state:(id)arg2 ;
@end

