//
//  LSILyric+NSJSONSerialization.h
//  LSILyric FInder
//
//  Created by Iyin Raphael on 3/8/19.
//  Copyright © 2019 Iyin Raphael. All rights reserved.
//

#import "LSILyric.h"

NS_ASSUME_NONNULL_BEGIN

@interface LSILyric (NSJSONSerialization)

-(instancetype) initFromDictionary: (NSDictionary *)dictionary;

-(NSDictionary *) fileDictionary;


@end

NS_ASSUME_NONNULL_END
