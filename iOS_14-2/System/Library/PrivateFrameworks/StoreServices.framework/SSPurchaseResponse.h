/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSError, SSPurchase, SSURLConnectionResponse, NSDictionary, NSMutableDictionary, NSString;

@interface SSPurchaseResponse : NSObject <SSXPCCoding, NSSecureCoding> {

	BOOL _cancelsPurchaseBatch;
	NSArray* _downloadIdentifiers;
	NSError* _error;
	SSPurchase* _purchase;
	double _requestStartTime;
	SSURLConnectionResponse* _response;
	double _responseEndTime;
	double _responseStartTime;
	NSDictionary* _tidHeaders;
	NSMutableDictionary* _transactionIdentifiers;

}

@property (assign,nonatomic) BOOL cancelsPurchaseBatch;                          //@synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch - In the implementation block
@property (nonatomic,copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) SSPurchase * purchase;                                //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,retain) SSURLConnectionResponse * URLResponse;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSArray * downloadIdentifiers;                        //@synthesize downloadIdentifiers=_downloadIdentifiers - In the implementation block
@property (assign,nonatomic) double requestStartTime;                            //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                             //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                           //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * tidHeaders;                          //@synthesize tidHeaders=_tidHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)responseEndTime;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSPurchase *)purchase;
-(void)setResponseStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(double)responseStartTime;
-(NSError *)error;
-(void)setPurchase:(SSPurchase *)arg1 ;
-(void)setRequestStartTime:(double)arg1 ;
-(NSDictionary *)tidHeaders;
-(void)setTidHeaders:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(double)requestStartTime;
-(id)downloadsMetadata;
-(BOOL)cancelsPurchaseBatch;
-(id)downloadMetadataForItemIdentifier:(long long)arg1 ;
-(id)responseMetrics;
-(id)transactionIdentifierForItemIdentifier:(long long)arg1 ;
-(void)setCancelsPurchaseBatch:(BOOL)arg1 ;
-(NSArray *)downloadIdentifiers;
-(void)setDownloadIdentifiers:(NSArray *)arg1 ;
-(void)setURLResponse:(SSURLConnectionResponse *)arg1 ;
-(SSURLConnectionResponse *)URLResponse;
@end
