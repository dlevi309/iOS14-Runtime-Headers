/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/


#import <TextInput_ja/TextInput_ja-Structs.h>
@class NSCharacterSet;

@interface Romakana : NSObject {

	NSCharacterSet* _consonantsCharacterSet;

}
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 ;
+(id)romajiString:(id)arg1 ;
+(id)kanaSymbol:(id)arg1 ;
+(SCD_Struct_Ro0)splitRomaji:(id)arg1 at:(unsigned long long)arg2 ;
-(id)hiraganaFromRomaji:(id)arg1 stripIncompleteRomajiAtEnd:(BOOL)arg2 strippedLength:(unsigned long long*)arg3 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end

