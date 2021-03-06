/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isSystemGesturesAllowed,nonatomic,readonly) BOOL systemGesturesAllowed; 
@property (nonatomic,retain) NSArray * systemGestureLoggingOptions; 
-(void)setSystemGesturesAllowed:(BOOL)arg1 ;
-(BOOL)isSystemGesturesAllowed;
-(void)setSystemGestureLoggingOptions:(NSArray *)arg1 ;
-(NSArray *)systemGestureLoggingOptions;
-(void)_bindAndRegisterDefaults;
@end

