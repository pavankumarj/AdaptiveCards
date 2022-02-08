import React from 'react';
import {Image} from 'react-native';
import {Registry} from '../registration/registry';

export const CommonImage = (props) => {
    const OverridenCommonImage = Registry.getManager().getInternalComponent(
        'CommonImage',
    );
    return OverridenCommonImage ? (
        <OverridenCommonImage {...props} />
    ) : (
        <Image {...props} />
    );
};
