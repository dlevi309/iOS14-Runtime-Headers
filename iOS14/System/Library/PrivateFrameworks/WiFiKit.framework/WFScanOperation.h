/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFOperation.h>

@class NSString, WFScanRequest, NSMutableSet, NSDictionary, NSSet;

@interface WFScanOperation : WFOperation {

	NSString* _targetSSID;
	WFScanRequest* _request;
	NSMutableSet* _scanResults;
	NSDictionary* _scanParameters;

}

@property (nonatomic,retain) NSMutableSet * scanResults;                 //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,retain) WFScanRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSDictionary * scanParameters;              //@synthesize scanParameters=_scanParameters - In the implementation block
@property (nonatomic,readonly) NSSet * results; 
@property (nonatomic,copy) NSString * targetSSID;                        //@synthesize targetSSID=_targetSSID - In the implementation block
-(void)finish;
-(NSSet *)results;
-(void)setRequest:(WFScanRequest *)arg1 ;
-(void)start;
-(WFScanRequest *)request;
-(id)description;
-(id)initWithRequest:(id)arg1 ;
-(void)cancel;
-(NSMutableSet *)scanResults;
-(void)setScanResults:(NSMutableSet *)arg1 ;
-(NSDictionary *)scanParameters;
-(void)scanDidFinishWithResults:(id)arg1 error:(int)arg2 ;
-(NSString *)targetSSID;
-(void)setTargetSSID:(NSString *)arg1 ;
-(void)setScanParameters:(NSDictionary *)arg1 ;
@end

