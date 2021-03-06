/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSArray, NSString;

@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCKZoneCommand> {

	BOOL _deferUpload;
	NSArray* _symbols;

}

@property (nonatomic,copy,readonly) NSArray * symbols;              //@synthesize symbols=_symbols - In the implementation block
@property (nonatomic,readonly) BOOL deferUpload;                    //@synthesize deferUpload=_deferUpload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSArray *)symbols;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithZone:(id)arg1 ;
-(BOOL)shouldDeferUpload;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)deferUpload;
-(id)initWithSymbols:(id)arg1 deferUpload:(BOOL)arg2 ;
@end

