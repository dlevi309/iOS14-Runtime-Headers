/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXFont : NSObject
+(id)edRunCollectionFromXmlTextPropertiesElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edFontWithOadTextBody:(id)arg1 state:(id)arg2 ;
+(id)defaultEdRunCollectionForTitle:(id)arg1 titleElement:(xmlNode*)arg2 state:(id)arg3 ;
+(id)readParagraphPropertiesFromXmlTextPropertiesParentElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)defaultEdRunCollectionWithState:(id)arg1 ;
+(id)edFontWithOadCharacterProperties:(id)arg1 state:(id)arg2 ;
+(id)edFontWithFullOadCharacterProperties:(id)arg1 state:(id)arg2 ;
+(void)mapFontProperties:(id)arg1 to:(id)arg2 ;
+(id)edFontFromXmlTextPropertiesElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)mapFontProperties:(id)arg1 toTextProps:(id)arg2 withEffects:(id)arg3 ;
@end

