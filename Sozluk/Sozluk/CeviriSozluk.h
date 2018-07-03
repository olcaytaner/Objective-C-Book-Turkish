//
//  CeviriSozluk.h
//  Sozluk
//
//  Created by Olcay Taner YILDIZ on 11/8/14.
//  Copyright (c) 2014 Olcay Taner YILDIZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KaynakKelime.h"

@interface CeviriSozluk : NSObject <NSXMLParserDelegate>
@property NSMutableArray* kelimeler;
@property (nonatomic) NSXMLParser *cozumleyici;
- (id)initWithAll:(NSString*)dosyaAd;
- (NSMutableArray*) kelimeAra:(NSString*)arananKelime;
@end