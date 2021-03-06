/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class wspContext, cNodeRestriction;

@interface wspQueryIn : NSObject {

	SCD_Struct_ws1 msghdr;
	wspContext* _wctx;
	cNodeRestriction* _primaryCnodeRestriction;
	cNodeRestriction* _secondaryCnodeRestriction;

}

@property (retain) wspContext * wctx;                                         //@synthesize wctx=_wctx - In the implementation block
@property (retain) cNodeRestriction * primaryCnodeRestriction;                //@synthesize primaryCnodeRestriction=_primaryCnodeRestriction - In the implementation block
@property (retain) cNodeRestriction * secondaryCnodeRestriction;              //@synthesize secondaryCnodeRestriction=_secondaryCnodeRestriction - In the implementation block
-(wspContext *)wctx;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
-(id)makePrimaryCnodeRestriction;
-(cNodeRestriction *)primaryCnodeRestriction;
-(id)makeSecondaryCnodeRestriction;
-(int)encodePrimaryQuery:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)encodeSecondaryQuery:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setPrimaryCnodeRestriction:(cNodeRestriction *)arg1 ;
-(cNodeRestriction *)secondaryCnodeRestriction;
-(void)setSecondaryCnodeRestriction:(cNodeRestriction *)arg1 ;
@end

