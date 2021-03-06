/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableData;

@interface MFBitmap : NSObject {

	int m_width;
	int m_height;
	unsigned m_bitsPerPixel;
	int m_compression;
	BOOL m_isOS2;
	unsigned m_infoHeaderSize;
	unsigned m_paletteSize;
	NSMutableData* m_bmpData;

}
-(id)init;
-(BOOL)isFlipped;
-(const char*)pixelData;
-(BOOL)isEmpty;
-(void)setNull;
-(unsigned)coloursUsed:(const char*)arg1 in_headerSize:(unsigned)arg2 in_usage:(int)arg3 ;
-(void)writePaletteEntry:(id)arg1 in_index:(int)arg2 ;
-(BOOL)parseHeader:(const char*)arg1 in_headerSize:(unsigned)arg2 ;
-(void)appendDIBPalette:(id)arg1 in_header:(const char*)arg2 in_headerSize:(unsigned)arg3 in_usage:(int)arg4 ;
-(BOOL)processDIBHeader:(id)arg1 in_header:(const char*)arg2 in_headerSize:(unsigned)arg3 in_usage:(int)arg4 ;
-(unsigned)pixelDataOffset:(const char*)arg1 in_headerSize:(unsigned)arg2 in_usage:(int)arg3 ;
-(void)writeFileHeader;
-(void)writeInfoHeader;
-(id)initWithDIBitmap:(id)arg1 in_dib:(const char*)arg2 in_dibSize:(unsigned)arg3 in_usage:(int)arg4 ;
-(id)initWithDIBitmap:(id)arg1 in_header:(const char*)arg2 in_headerSize:(unsigned)arg3 in_bitmap:(const char*)arg4 in_bitmapSize:(unsigned)arg5 in_usage:(int)arg6 ;
-(id)initWithBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char*)arg6 in_bitmapSize:(unsigned)arg7 ;
-(void)setMonoPalette:(id)arg1 ;
@end

