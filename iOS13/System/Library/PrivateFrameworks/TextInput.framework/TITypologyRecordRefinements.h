/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardCandidate, TIKeyboardState, TIAutocorrectionList;

@interface TITypologyRecordRefinements : TITypologyRecord {

	TIKeyboardCandidate* _candidate;
	TIKeyboardState* _keyboardState;
	TIAutocorrectionList* _refinements;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                 //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                 //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * refinements;              //@synthesize refinements=_refinements - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(TIKeyboardCandidate *)candidate;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIAutocorrectionList *)refinements;
-(void)setRefinements:(TIAutocorrectionList *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

