/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libmecabra.dylib
*/


#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
@class NSString, NSArray;

@interface MecabraWordProperties : NSObject {

	NSString* _analysisString;
	NSArray* _characterInformation;
	NSArray* _codeLookupInformation;
	BOOL _emoji;
	int _language;

}

@property (nonatomic,copy) NSString * analysisString;                      //@synthesize analysisString=_analysisString - In the implementation block
@property (nonatomic,retain) NSArray * characterInformation;               //@synthesize characterInformation=_characterInformation - In the implementation block
@property (nonatomic,retain) NSArray * codeLookupInformation;              //@synthesize codeLookupInformation=_codeLookupInformation - In the implementation block
@property (assign,getter=isEmoji,nonatomic) BOOL emoji;                    //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) int language;                                 //@synthesize language=_language - In the implementation block
+(id)sortedRadicalList;
+(IDXIndexRef)informationDictionaryAtPath:(CFURLRef)arg1 ;
+(IDXIndexRef)characterInformationDictionary;
+(id)searchResultsForString:(id)arg1 dictionary:(IDXIndexRef)arg2 ;
+(IDXIndexRef)codeLookupInformationDictionary;
-(void)setLanguage:(int)arg1 ;
-(id)valueForKey:(int)arg1 ;
-(void)setEmoji:(BOOL)arg1 ;
-(BOOL)isEmoji;
-(int)language;
-(void)dealloc;
-(NSString *)analysisString;
-(id)initWithString:(id)arg1 language:(int)arg2 ;
-(id)wubixingCodesForStandard:(int)arg1 ;
-(NSArray *)codeLookupInformation;
-(id)separatedInputCodesForString:(id)arg1 ;
-(NSArray *)characterInformation;
-(id)radicalInformationForString:(id)arg1 ;
-(id)strokeInformationForString:(id)arg1 ;
-(id)pinyinInformationForString:(id)arg1 ;
-(id)zhuyinInformationForString:(id)arg1 ;
-(id)initialsForStrings:(id)arg1 ;
-(id)tonesForString:(id)arg1 ;
-(id)wubixingCodes;
-(id)bihuaCodes;
-(id)cangjieCodes;
-(id)isIncludedInCurrentLanguage;
-(void)setAnalysisString:(NSString *)arg1 ;
-(void)setCharacterInformation:(NSArray *)arg1 ;
-(void)setCodeLookupInformation:(NSArray *)arg1 ;
@end

