/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <UserNotificationsKit/NCNotificationContent.h>

@class NSString, UIImage, NSArray, NSDate, NSTimeZone;

@interface NCMutableNotificationContent : NCNotificationContent

@property (nonatomic,copy) NSString * header; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * hiddenPreviewsBodyPlaceholder; 
@property (nonatomic,copy) NSString * categorySummaryFormat; 
@property (nonatomic,copy) NSString * summaryArgument; 
@property (assign,nonatomic) unsigned long long summaryArgumentCount; 
@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSArray * icons; 
@property (nonatomic,retain) UIImage * carPlayIcon; 
@property (nonatomic,retain) NSArray * carPlayIcons; 
@property (nonatomic,retain) UIImage * attachmentImage; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
-(void)setSummaryArgument:(NSString *)arg1 ;
-(void)setSummaryArgumentCount:(unsigned long long)arg1 ;
-(void)setHiddenPreviewsBodyPlaceholder:(NSString *)arg1 ;
-(void)setCategorySummaryFormat:(NSString *)arg1 ;
-(void)setDateAllDay:(BOOL)arg1 ;
-(void)setCarPlayIcons:(NSArray *)arg1 ;
-(void)setCarPlayIcon:(UIImage *)arg1 ;
-(void)setAttachmentImage:(UIImage *)arg1 ;
@end

