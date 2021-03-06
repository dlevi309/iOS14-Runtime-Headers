/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAUSMarkup.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUSTextMarkup : AceObject <SAUSMarkup, SAAceSerializable>

@property (assign,nonatomic) BOOL emphasized; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textMarkup;
+(id)textMarkupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)emphasized;
-(void)setEmphasized:(BOOL)arg1 ;
@end

