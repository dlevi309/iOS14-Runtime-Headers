/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTiledLayoutGenerator.h>

@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator {

	CGPoint _origin;
	double _referenceHeight;

}

@property (assign,nonatomic) double referenceHeight;              //@synthesize referenceHeight=_referenceHeight - In the implementation block
-(void)willParseTiles;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(BOOL)_scanTripletWithLargeLead:(SCD_Struct_CK12*)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(SCD_Struct_CK12*)arg1 ;
-(BOOL)_addSpecialSequenceBlock:(SCD_Struct_CK12*)arg1 ;
-(BOOL)_scanNonPanoramaSequence:(SCD_Struct_CK12*)arg1 count:(long long)arg2 ;
-(BOOL)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
-(double)referenceHeight;
-(BOOL)_hasLeftSuboptimalColumn;
-(BOOL)_addColumnWithTiles:(SCD_Struct_CK12*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(BOOL)_addColumnWithContiguousTiles:(SCD_Struct_CK12*)arg1 count:(long long)arg2 ;
-(BOOL)_scanSpecialSequenceColumn:(SCD_Struct_CK12*)arg1 count:(long long*)arg2 ;
-(BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(BOOL*)arg2 ;
-(BOOL)_isAtEndOfColumn;
-(void)_enumerateColumnFramesWithContiguousTiles:(SCD_Struct_CK12*)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(void)setReferenceHeight:(double)arg1 ;
@end

