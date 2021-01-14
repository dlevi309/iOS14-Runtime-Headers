/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


@class NSString, PKPrintSettings, NSDate, NSData, NSURL;

@interface PKJob : NSObject {

	long long number;
	long long remoteJobId;
	long long mediaProgress;
	long long mediaSheets;
	long long mediaSheetsCompleted;
	NSString* printerDisplayName;
	long long printerKind;
	NSString* printerLocation;
	PKPrintSettings* settings;
	long long state;
	NSDate* timeAtCompleted;
	NSDate* timeAtCreation;
	NSDate* timeAtProcessing;
	NSData* thumbnailImage;
	NSURL* _printerURI;
	NSString* _PIN;

}

@property (assign,nonatomic) long long number; 
@property (assign,nonatomic) long long remoteJobId; 
@property (assign,nonatomic) long long mediaProgress; 
@property (assign,nonatomic) long long mediaSheets; 
@property (assign,nonatomic) long long mediaSheetsCompleted; 
@property (nonatomic,retain) NSURL * printerURI;                              //@synthesize printerURI=_printerURI - In the implementation block
@property (nonatomic,retain) NSString * printerDisplayName; 
@property (assign,nonatomic) long long printerKind; 
@property (nonatomic,retain) NSString * printerLocation; 
@property (nonatomic,retain) PKPrintSettings * settings; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,retain) NSDate * timeAtCompleted; 
@property (nonatomic,retain) NSDate * timeAtCreation; 
@property (nonatomic,retain) NSDate * timeAtProcessing; 
@property (nonatomic,retain) NSData * thumbnailImage; 
@property (nonatomic,readonly) NSString * localizedStatusString; 
@property (nonatomic,readonly) NSString * localizedJobOptions; 
@property (nonatomic,retain) NSString * PIN;                                  //@synthesize PIN=_PIN - In the implementation block
+(id)jobs;
+(id)currentJob;
-(void)setNumber:(long long)arg1 ;
-(NSString *)PIN;
-(long long)number;
-(void)setSettings:(PKPrintSettings *)arg1 ;
-(long long)update;
-(PKPrintSettings *)settings;
-(NSData *)thumbnailImage;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setPIN:(NSString *)arg1 ;
-(void)setThumbnailImage:(NSData *)arg1 ;
-(long long)cancel;
-(void)setMediaProgress:(long long)arg1 ;
-(void)setMediaSheetsCompleted:(long long)arg1 ;
-(void)setTimeAtCompleted:(NSDate *)arg1 ;
-(void)setTimeAtProcessing:(NSDate *)arg1 ;
-(NSString *)localizedStatusString;
-(NSString *)localizedJobOptions;
-(long long)remoteJobId;
-(void)setRemoteJobId:(long long)arg1 ;
-(long long)mediaProgress;
-(long long)mediaSheets;
-(void)setMediaSheets:(long long)arg1 ;
-(long long)mediaSheetsCompleted;
-(NSString *)printerDisplayName;
-(void)setPrinterDisplayName:(NSString *)arg1 ;
-(long long)printerKind;
-(void)setPrinterKind:(long long)arg1 ;
-(NSString *)printerLocation;
-(void)setPrinterLocation:(NSString *)arg1 ;
-(NSDate *)timeAtCompleted;
-(NSDate *)timeAtCreation;
-(void)setTimeAtCreation:(NSDate *)arg1 ;
-(NSDate *)timeAtProcessing;
-(NSURL *)printerURI;
-(void)setPrinterURI:(NSURL *)arg1 ;
@end
