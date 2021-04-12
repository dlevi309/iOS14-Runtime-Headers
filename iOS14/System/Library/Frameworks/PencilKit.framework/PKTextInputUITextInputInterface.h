/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKTextInputUITextInputInterface : NSObject
+(BOOL)setSelectionWithReferencePoint:(CGPoint)arg1 inTextInput:(id)arg2 ;
+(BOOL)makeTextInputFirstResponder:(id)arg1 forPencilInput:(BOOL)arg2 ;
+(BOOL)showSelectionCommandsForTextInput:(id)arg1 ;
+(NSRange)activePreviewRangeInTextInput:(id)arg1 ;
+(BOOL)clearActivePreviewInTextInput:(id)arg1 ;
+(void)notifyTextWillChangeInTextInput:(id)arg1 ;
+(void)notifyTextDidChangeInTextInput:(id)arg1 ;
+(long long)contentLengthForTextInput:(id)arg1 ;
+(id)stringInRange:(NSRange)arg1 inTextInput:(id)arg2 ;
+(id)protectedCharacterIndexesInRange:(NSRange)arg1 inTextInput:(id)arg2 ;
+(NSRange)rangeOfCharacterAtIndex:(unsigned long long)arg1 inTextInput:(id)arg2 ;
+(BOOL)isValidRange:(NSRange)arg1 inTextInput:(id)arg2 ;
+(CGRect)firstRectForRange:(NSRange)arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 ;
+(long long)characterIndexClosestToPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 forInsertingText:(BOOL)arg4 ;
+(CGRect)caretRectInCoordinateSpace:(id)arg1 inTextInput:(id)arg2 ;
+(CGRect)caretRectForCharacterIndex:(long long)arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 ;
+(id)selectionRectsForRange:(NSRange)arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 intersectingRect:(CGRect)arg4 ;
+(id)rectValuesForSelectionRects:(id)arg1 inCoordinateSpace:(id)arg2 inTextInput:(id)arg3 intersectingRect:(CGRect)arg4 ;
+(BOOL)insertCommittedText:(id)arg1 withAlternatives:(id)arg2 activePreviewText:(id)arg3 replacingRange:(NSRange)arg4 inTextInput:(id)arg5 ;
+(BOOL)deleteTextInRange:(NSRange)arg1 inTextInput:(id)arg2 ;
+(NSRange)selectedRangeInTextInput:(id)arg1 ;
+(BOOL)selectTextInRange:(NSRange)arg1 inTextInput:(id)arg2 ;
+(BOOL)configureSelectionStyleForHighlightInTextInput:(id)arg1 ;
+(BOOL)configureSelectionStyleForDeletionPreviewInTextInput:(id)arg1 ;
+(BOOL)configureSelectionStyleForNormalSelectionInTextInput:(id)arg1 ;
+(id)insertTextPlaceholderWithSize:(CGSize)arg1 inTextInput:(id)arg2 ;
+(void)removeTextPlaceholder:(id)arg1 inTextInput:(id)arg2 ;
+(NSRange)_rangeFromUITextPosition:(id)arg1 toUITextPosition:(id)arg2 inTextInput:(id)arg3 ;
+(id)_uiTextRangeForRange:(NSRange)arg1 inTextInput:(id)arg2 ;
+(BOOL)_callShouldInsertText:(id)arg1 inTextInput:(id)arg2 isMarkedText:(BOOL)arg3 ;
+(BOOL)_callShouldChangeTextInRange:(id)arg1 replacementText:(id)arg2 inTextInput:(id)arg3 ;
+(BOOL)_selectTextRange:(id)arg1 inTextInput:(id)arg2 ;
+(BOOL)selectWordBoundaryAtPoint:(CGPoint)arg1 inTextInput:(id)arg2 ;
@end
